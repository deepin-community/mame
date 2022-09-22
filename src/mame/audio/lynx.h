// license:GPL-2.0+
// copyright-holders:Peter Trauner
#ifndef MAME_AUDIO_LYNX_H
#define MAME_AUDIO_LYNX_H

#pragma once


class lynx_sound_device : public device_t, public device_sound_interface
{
public:
	typedef device_delegate<void (void)> timer_delegate;

	lynx_sound_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock);

	uint8_t read(offs_t offset);
	void write(offs_t offset, uint8_t data);
	void count_down(int nr);
	template <typename... T> void set_timer_delegate(T &&... args) { m_timer_delegate.set(std::forward<T>(args)...); }

protected:
	struct LYNX_AUDIO {
		struct {
			int8_t volume;
			uint8_t feedback;
			int8_t output;
			uint8_t shifter;
			uint8_t bakup;
			uint8_t control1;
			uint8_t counter;
			uint8_t control2;
		} reg;
		uint8_t attenuation;
		uint16_t mask; // 12-bit
		uint16_t shifter; // 12-bit
		float ticks;
		int count;
	};

	lynx_sound_device(const machine_config &mconfig, device_type type, const char *tag, device_t *owner, uint32_t clock);

	// device-level overrides
	virtual void device_start() override;

	virtual void device_reset() override;

	// sound stream update overrides
	virtual void sound_stream_update(sound_stream &stream, std::vector<read_stream_view> const &inputs, std::vector<write_stream_view> &outputs) override;

	void reset_channel(LYNX_AUDIO *channel);
	void shift(int chan_nr);
	void execute(int chan_nr);
	void init();
	void register_save();

	sound_stream *m_mixer_channel;
	timer_delegate   m_timer_delegate;   // this calls lynx_timer_count_down from the driver state

	float m_usec_per_sample;
	std::unique_ptr<int[]> m_shift_mask;
	std::unique_ptr<int[]> m_shift_xor;
	uint8_t m_attenuation_enable;
	uint8_t m_master_enable;
	LYNX_AUDIO m_audio[4];
};


class lynx2_sound_device : public lynx_sound_device
{
public:
	lynx2_sound_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock);

protected:
	// device-level overrides
	virtual void device_start() override;

	// sound stream update overrides
	virtual void sound_stream_update(sound_stream &stream, std::vector<read_stream_view> const &inputs, std::vector<write_stream_view> &outputs) override;
};


DECLARE_DEVICE_TYPE(LYNX_SND,  lynx_sound_device)
DECLARE_DEVICE_TYPE(LYNX2_SND, lynx2_sound_device)

#endif // MAME_AUDIO_LYNX_H

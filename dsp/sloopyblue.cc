// generated from file '../dkbuild/sloopyblue//sloopyblue.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "bluesbreaker_clip_table.h"

namespace sloopyblue {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec1[2];
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec4[2];
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fRec5[5];
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fRec3[3];
	double 	fConst95;
	double 	fConst96;
	double 	fRec2[5];
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "sloopyblue";
	name = N_("SloopyBlue");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<5; i++) fRec5[i] = 0;
	for (int i=0; i<3; i++) fRec3[i] = 0;
	for (int i=0; i<5; i++) fRec2[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (8.28259651183879e-21 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * (0 - (1.38371501677539e-16 + fConst1))) - 1.21856690475597e-13)) - 2.59155084851026e-14);
	fConst3 = (2.80664956893661e-14 + (fConst0 * (1.60591718844371e-13 + (fConst0 * (1.42512799933459e-16 + fConst1)))));
	fConst4 = (8.28259651183879e-20 * fConst0);
	fConst5 = (8.4400805994353e-12 + (fConst0 * (1.61304995390944e-12 + (fConst0 * (1.42554254329e-15 + fConst4)))));
	fConst6 = (3.04507224699956e-20 * fConst0);
	fConst7 = (1.29577542425513e-17 + (fConst0 * (6.08888759183759e-17 - fConst6)));
	fConst8 = ((fConst0 * (fConst6 - 4.56635146833781e-17)) - 3.04634858579245e-14);
	fConst9 = (6.47887712127565e-21 + fConst6);
	fConst10 = (0 - (1.52318401121191e-17 + fConst6));
	fConst11 = (3.04507224699956e-19 * fConst0);
	fConst12 = ((fConst0 * (0 - (1.53842459780814e-16 + fConst11))) - 7.94747659274081e-16);
	fConst13 = ((fConst0 * ((fConst0 * (fConst11 - 4.55111088174157e-16)) - 3.06859416672659e-13)) - 1.58918109300778e-12);
	fConst14 = (6.09014449399911e-16 * fConst0);
	fConst15 = (1.29577542425513e-16 - fConst14);
	fConst16 = (6.09014449399911e-20 * fConst0);
	fConst17 = (3.04507224699956e-17 - fConst16);
	fConst18 = (1.65651930236776e-20 * fConst0);
	fConst19 = (2.51888376271803e-16 - fConst18);
	fConst20 = (1.21802889879982e-12 * fConst0);
	fConst21 = (fConst20 - 2.59155084851026e-13);
	fConst22 = (2.59155084851026e-14 + (fConst0 * ((fConst0 * (1.38371501677539e-16 - fConst1)) - 1.21856690475597e-13)));
	fConst23 = ((fConst0 * (1.60591718844371e-13 + (fConst0 * (fConst1 - 1.42512799933459e-16)))) - 2.80664956893661e-14);
	fConst24 = ((fConst0 * (1.61304995390944e-12 + (fConst0 * (fConst4 - 1.42554254329e-15)))) - 8.4400805994353e-12);
	fConst25 = (1.29577542425513e-17 + (fConst0 * (0 - (6.08888759183759e-17 + fConst6))));
	fConst26 = ((fConst0 * (4.56635146833781e-17 + fConst6)) - 3.04634858579245e-14);
	fConst27 = (fConst6 - 6.47887712127565e-21);
	fConst28 = (1.52318401121191e-17 - fConst6);
	fConst29 = ((fConst0 * (1.53842459780814e-16 - fConst11)) - 7.94747659274081e-16);
	fConst30 = (1.58918109300778e-12 + (fConst0 * ((fConst0 * (4.55111088174157e-16 + fConst11)) - 3.06859416672659e-13)));
	fConst31 = (3.31303860473552e-20 * fConst0);
	fConst32 = faustpower<2>(fConst0);
	fConst33 = (5.18310169702052e-14 + (fConst32 * (fConst31 - 2.76743003355078e-16)));
	fConst34 = ((fConst32 * (2.85025599866917e-16 - fConst31)) - 5.61329913787323e-14);
	fConst35 = (3.31303860473552e-19 * fConst0);
	fConst36 = ((fConst32 * (2.85108508658001e-15 - fConst35)) - 1.68801611988706e-11);
	fConst37 = (1.21802889879982e-19 * fConst0);
	fConst38 = (1.21777751836752e-16 + fConst37);
	fConst39 = (0 - (9.13270293667562e-17 + fConst37));
	fConst40 = (1.29577542425513e-20 - fConst37);
	fConst41 = (fConst37 - 3.04636802242381e-17);
	fConst42 = (1.21802889879982e-18 * fConst0);
	fConst43 = (fConst42 - 3.07684919561628e-16);
	fConst44 = (3.17836218601556e-12 + (fConst32 * (0 - (9.10222176348315e-16 + fConst42))));
	fConst45 = (1.82704334819973e-18 * fConst32);
	fConst46 = (1.58949531854816e-15 - fConst45);
	fConst47 = (1.82704334819973e-19 * fConst32);
	fConst48 = (0 - (2.59155084851026e-17 + fConst47));
	fConst49 = (6.0926971715849e-14 + fConst47);
	fConst50 = (6.13718833345318e-13 + fConst45);
	fConst51 = (4.96955790710328e-20 * fConst32);
	fConst52 = (2.43713380951195e-13 - fConst51);
	fConst53 = (fConst51 - 3.21183437688743e-13);
	fConst54 = ((4.96955790710328e-19 * fConst32) - 3.22609990781889e-12);
	fConst55 = ((fConst32 * (2.76743003355078e-16 + fConst31)) - 5.18310169702052e-14);
	fConst56 = (5.61329913787323e-14 + (fConst32 * (0 - (2.85025599866917e-16 + fConst31))));
	fConst57 = (1.68801611988706e-11 + (fConst32 * (0 - (2.85108508658001e-15 + fConst35))));
	fConst58 = (fConst37 - 1.21777751836752e-16);
	fConst59 = (9.13270293667562e-17 - fConst37);
	fConst60 = (0 - (1.29577542425513e-20 + fConst37));
	fConst61 = (3.04636802242381e-17 + fConst37);
	fConst62 = (3.07684919561628e-16 + fConst42);
	fConst63 = ((fConst32 * (9.10222176348315e-16 - fConst42)) - 3.17836218601556e-12);
	fConst64 = (4.10271246913054e-10 * fConst0);
	fConst65 = (0.000451093300755755 + (fConst0 * (fConst64 - 1.13091570440766e-06)));
	fConst66 = (0.00090218660151151 - (8.20542493826108e-10 * fConst32));
	fConst67 = (1.0 / (0.000451093300755755 + (fConst0 * (1.13091570440766e-06 + fConst64))));
	fConst68 = (6.34730676451394e-20 * fConst0);
	fConst69 = ((fConst0 * (5.00430850711826e-10 + (fConst0 * (1.03708700401282e-11 + (fConst0 * (2.6038250533261e-15 + fConst68)))))) - 1.54816431025375e-23);
	fConst70 = (3.17365338225697e-15 * fConst0);
	fConst71 = (2.49902074166263e-05 + (fConst0 * (5.17897058502163e-07 + (fConst0 * (1.30088623884671e-10 + fConst70)))));
	fConst72 = (6.34722717589379e-20 * fConst0);
	fConst73 = (2.52736496790542e-20 + (fConst0 * (1.03331712566936e-09 + (fConst0 * (fConst72 - 1.66292441194355e-13)))));
	fConst74 = (3.17361358794689e-15 * fConst0);
	fConst75 = ((fConst0 * (1.2993195540595e-10 - fConst74)) - 5.11543131519487e-07);
	fConst76 = ((fConst0 * ((fConst0 * (1.03708700401282e-11 + (fConst0 * (fConst68 - 2.6038250533261e-15)))) - 5.00430850711826e-10)) - 1.54816431025375e-23);
	fConst77 = (2.49902074166263e-05 + (fConst0 * ((fConst0 * (1.30088623884671e-10 - fConst70)) - 5.17897058502163e-07)));
	fConst78 = (2.53892270580558e-19 * fConst0);
	fConst79 = ((fConst0 * ((fConst32 * (5.2076501066522e-15 - fConst78)) - 1.00086170142365e-09)) - 6.19265724101498e-23);
	fConst80 = (6.34730676451394e-15 * fConst32);
	fConst81 = (9.99608296665051e-05 + (fConst0 * (fConst80 - 1.03579411700433e-06)));
	fConst82 = ((fConst32 * ((3.80838405870837e-19 * fConst32) - 2.07417400802565e-11)) - 9.28898586152247e-23);
	fConst83 = (0.000149941244499758 - (2.60177247769342e-10 * fConst32));
	fConst84 = ((fConst0 * (1.00086170142365e-09 + (fConst32 * (0 - (5.2076501066522e-15 + fConst78))))) - 6.19265724101498e-23);
	fConst85 = (9.99608296665051e-05 + (fConst0 * (1.03579411700433e-06 - fConst80)));
	fConst86 = (2.53889087035751e-19 * fConst0);
	fConst87 = (5.05472993581083e-20 + (fConst32 * (3.32584882388709e-13 - fConst86)));
	fConst88 = (6.34722717589379e-15 * fConst32);
	fConst89 = (fConst88 - 1.02308626303897e-06);
	fConst90 = ((3.80833630553627e-19 * fConst32) - 2.06663425133872e-09);
	fConst91 = ((fConst32 * (0 - (3.32584882388709e-13 + fConst86))) - 5.05472993581083e-20);
	fConst92 = (1.02308626303897e-06 - fConst88);
	fConst93 = ((fConst0 * (1.03331712566936e-09 + (fConst0 * (1.66292441194355e-13 + fConst72)))) - 2.52736496790542e-20);
	fConst94 = (5.11543131519487e-07 + (fConst0 * (1.2993195540595e-10 + fConst74)));
	fConst95 = (4.26293887776618e-05 * fConst0);
	fConst96 = (0 - fConst95);
	fConst97 = (1.29577542425513e-16 + fConst14);
	fConst98 = (3.04507224699956e-17 + fConst16);
	fConst99 = (2.51888376271803e-16 + fConst18);
	fConst100 = (2.59155084851026e-13 + fConst20);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		fRec1[0] = (fSlow1 + (0.993 * fRec1[1]));
		double fTemp0 = (2.01233923386822e-12 + ((fRec1[0] * ((fConst0 * (fConst13 + ((fRec1[0] * ((fConst0 * (fConst12 + (fRec0[0] * ((fConst0 * (fConst10 + (fConst9 * fRec0[0]))) - 3.23943856063783e-18)))) - 1.61971928031891e-16)) + (fRec0[0] * ((fConst0 * (fConst8 + (fConst7 * fRec0[0]))) - 6.47887712127565e-15))))) - 3.23943856063783e-13)) + (fConst0 * (fConst5 + (fRec0[0] * (fConst3 + (fConst2 * fRec0[0])))))));
		fRec4[0] = (fSlow2 + (0.993 * fRec4[1]));
		double fTemp1 = (fConst71 + (fConst69 * fRec4[0]));
		fRec5[0] = ((double)input0[i] - (((((fRec5[1] * (fConst85 + (fConst84 * fRec4[0]))) + (fRec5[2] * (fConst83 + (fConst82 * fRec4[0])))) + (fRec5[3] * (fConst81 + (fConst79 * fRec4[0])))) + (fRec5[4] * (fConst77 + (fConst76 * fRec4[0])))) / fTemp1));
		fRec3[0] = ((fConst0 * ((((((fRec5[0] * (fConst94 + (fConst93 * fRec4[0]))) + (fRec5[1] * (fConst92 + (fConst91 * fRec4[0])))) + (fConst0 * (fRec5[2] * ((fConst90 * fRec4[0]) - 2.59863910811899e-10)))) + (fRec5[3] * (fConst89 + (fConst87 * fRec4[0])))) + (fRec5[4] * (fConst75 + (fConst73 * fRec4[0])))) / fTemp1)) - (fConst67 * ((fConst66 * fRec3[1]) + (fConst65 * fRec3[2]))));
		fRec2[0] = (bluesbreaker_clipclip((fConst67 * ((fConst96 * fRec3[0]) + (fConst95 * fRec3[2])))) - (((((fRec2[1] * (8.04935693547287e-12 + ((fRec1[0] * ((fConst0 * (fConst63 + ((fRec1[0] * ((fConst32 * (fConst62 + (fRec0[0] * (fConst61 + (fConst60 * fRec0[0]))))) - 3.23943856063783e-16)) + (fRec0[0] * ((fConst32 * (fConst59 + (fConst58 * fRec0[0]))) - 1.29577542425513e-14))))) - 1.29577542425513e-12)) + (fConst0 * (fConst57 + (fRec0[0] * (fConst56 + (fConst55 * fRec0[0])))))))) + (fRec2[2] * (1.20740354032093e-11 + ((fConst32 * (fConst54 + (fRec0[0] * (fConst53 + (fConst52 * fRec0[0]))))) + (fRec1[0] * ((fConst32 * (fConst50 + ((fRec0[0] * (fConst49 + (fConst48 * fRec0[0]))) + (fRec1[0] * (fConst46 + (fRec0[0] * (6.47887712127565e-18 + (fConst32 * ((1.82704334819973e-19 * fRec0[0]) - 1.82704334819973e-19))))))))) - 1.9436631363827e-12)))))) + (fRec2[3] * (8.04935693547287e-12 + ((fRec1[0] * ((fConst0 * (fConst44 + ((fRec1[0] * (3.23943856063783e-16 + (fConst32 * (fConst43 + (fRec0[0] * (fConst41 + (fConst40 * fRec0[0]))))))) + (fRec0[0] * (1.29577542425513e-14 + (fConst32 * (fConst39 + (fConst38 * fRec0[0])))))))) - 1.29577542425513e-12)) + (fConst0 * (fConst36 + (fRec0[0] * (fConst34 + (fConst33 * fRec0[0]))))))))) + (fRec2[4] * (2.01233923386822e-12 + ((fRec1[0] * ((fConst0 * (fConst30 + ((fRec1[0] * (1.61971928031891e-16 + (fConst0 * (fConst29 + (fRec0[0] * ((fConst0 * (fConst28 + (fConst27 * fRec0[0]))) - 3.23943856063783e-18)))))) + (fRec0[0] * (6.47887712127565e-15 + (fConst0 * (fConst26 + (fConst25 * fRec0[0])))))))) - 3.23943856063783e-13)) + (fConst0 * (fConst24 + (fRec0[0] * (fConst23 + (fConst22 * fRec0[0]))))))))) / fTemp0));
		double fTemp2 = (5.18310169702052e-13 * fRec0[0]);
		double fTemp3 = (1.21802889879982e-19 + (1.21802889879982e-15 * fRec0[0]));
		output0[i] = (FAUSTFLOAT)(fConst0 * ((((((fRec2[0] * (6.09014449399911e-14 + ((fConst100 * fRec0[0]) + (fConst0 * (fConst99 + (fRec1[0] * (fConst98 + (fConst97 * fRec0[0])))))))) + (fRec2[1] * (1.21802889879982e-13 + (fTemp2 + (fConst32 * ((fRec1[0] * (0 - fTemp3)) - 3.31303860473552e-20)))))) + (fConst0 * (fRec2[2] * ((fRec1[0] * (0 - (6.09014449399911e-17 + (2.59155084851026e-16 * fRec0[0])))) - (5.03776752543607e-16 + (2.43605779759965e-12 * fRec0[0])))))) + (fRec2[3] * ((fConst32 * (3.31303860473552e-20 + (fRec1[0] * fTemp3))) - (1.21802889879982e-13 + fTemp2)))) + (fRec2[4] * (((fConst21 * fRec0[0]) + (fConst0 * (fConst19 + (fRec1[0] * (fConst17 + (fConst15 * fRec0[0])))))) - 6.09014449399911e-14))) / fTemp0));
		// post processing
		for (int i=4; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec3[2] = fRec3[1]; fRec3[1] = fRec3[0];
		for (int i=4; i>0; i--) fRec5[i] = fRec5[i-1];
		fRec4[1] = fRec4[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case GAIN: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   GAIN, 
   TONE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace sloopyblue

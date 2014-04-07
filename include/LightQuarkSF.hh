#ifndef LIGHT_QUARK_SF
#define LIGHT_QUARK_SF 1

#include "TF1.h"
#include "TLegend.h"
#include <TCanvas.h>

TF1* GetSFlmean(TString tagger, TString TaggerStrength, float Etamin, float Etamax, TString DataPeriod);
TF1* GetSFlmin(TString tagger, TString TaggerStrength, float Etamin, float Etamax, TString DataPeriod);
TF1* GetSFlmax(TString tagger, TString TaggerStrength, float Etamin, float Etamax, TString DataPeriod);

#endif

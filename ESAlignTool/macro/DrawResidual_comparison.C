#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include "TF1.h"
#include "TFile.h"
#include "TH1.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TGraph.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TString.h"
#include "TROOT.h"
#include "CMSstyle.C"
#include "PlotFunc.C"
using namespace std;
//void DrawResidual(TString directory)
void DrawResidual_comparison()
{
    //printf("Hello World!\n");
    //return;

    TCanvas* c1 = new TCanvas("c1", "", 850, 700 );
    TString output = Form("./eos/AlignmentResidualBA");

    TString path;
    path = "/afs/cern.ch/user/y/ykao/work/quickESAlignment/CMSSW_12_4_3/src/AlignmentTool/ESAlignTool/test/condor/result/";
    TFile* f1 = new TFile(path+"AlignmentFile_iter1.root");
    TFile* f2 = new TFile(path+"AlignmentFile_iter7.root");

    drawResidual_BeforeAfter(f1, f2, "12.5 pb^{-1} (13.6 TeV)", c1, output.Data(), 1);
}

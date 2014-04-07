#include <iostream>
#include <fstream>
#include "TF1.h"
#include "TROOT.h"

#include "LightQuarkSF.hh"
//using namespace std;
int main(){
  
  gROOT->Reset();
  
  float ptmin[] = {20, 20, 30, 40, 50, 60, 70, 80, 100, 120, 160, 210, 260, 320, 400, 500, 600, 800};
  float  SFb_err_L[] = {0.0484285, 0.0126178, 0.0120027, 0.0141137, 0.0145441, 0.0131145, 0.0168479, 0.0160836, 0.0126209, 0.0136017, 0.019182, 0.0198805, 0.0386531, 0.0392831, 0.0481008, 0.0474291};
  float  SFb_err_M[] = {0.0554504, 0.0209663, 0.0207019, 0.0230073, 0.0208719, 0.0200453, 0.0264232, 0.0240102, 0.0229375, 0.0184615, 0.0216242, 0.0248119, 0.0465748, 0.0474666, 0.0718173, 0.0717567 };
  float  SFb_err_T[] = {0.0567059, 0.0266907, 0.0263491, 0.0342831, 0.0303327, 0.024608, 0.0333786, 0.0317642, 0.031102, 0.0295603, 0.0474663, 0.0503182, 0.0580424, 0.0575776, 0.0769779, 0.0898199 };
  
  
  std::ofstream ofs1 ("Beff_SF_CSVL_cpena.txt", std::ofstream::out);
  
  for(int i = 0; i < 18;i++){
    if(i == 0){
      ofs1 << 1.0 << " "  << 0.0 << " " 
	   << 0.981149*((1.+(-0.000713295*ptmin[i]))/(1.+(-0.000703264*ptmin[i]))) << " " << 2.0*SFb_err_L[0] << std::endl;
    }else if( i < 17){
      ofs1 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.981149*((1.+(-0.000713295*(0.5*ptmin[i+1]+0.5*ptmin[i])))/(1.+(-0.000703264*(0.5*ptmin[i+1]+0.5*ptmin[i])))) 
	   << " " << SFb_err_L[i-1] << std::endl;
    }else{
      ofs1 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.981149*((1.+(-0.000713295*ptmin[i]))/(1.+(-0.000703264*ptmin[i]))) << " " << 2.0*SFb_err_L[15] << std::endl;
    }
  }
  
  ofs1.close();
  std::ofstream ofs2 ("Beff_SF_CSVM_cpena.txt", std::ofstream::out);
  std::cout << "==============================================" << std::endl;
  for(int i = 0; i < 18;i++){
    if(i == 0){
      ofs2 << 1.0 << " "  << 0.0 << " " 
	   << 0.726981*((1.+(0.253238*ptmin[i]))/(1.+(0.188389*ptmin[i]))) << " " << 2.0*SFb_err_M[0] << std::endl;
    }else if (i < 17){
      ofs2 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.726981*((1.+(0.253238*(0.5*ptmin[i+1]+0.5*ptmin[i])))/(1.+(0.188389*(0.5*ptmin[i+1]+0.5*ptmin[i])))) 
	   << " " << SFb_err_M[i-1] << std::endl;
    }else{
      ofs2 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.726981*((1.+(0.253238*ptmin[i]))/(1.+(0.188389*ptmin[i]))) 
	   << " " << 2.0*SFb_err_M[15] << std::endl;
    }
    
  }
  ofs2.close();
  std::ofstream ofs3 ("Beff_SF_CSVT_cpena.txt", std::ofstream::out);
  std::cout << "=============================================="<< std::endl;
  for(int i = 0; i < 18;i++){
    if(i == 0){
      ofs3 << 1.0 << " "  << 0.0 << " " 
	   << 0.869965*((1.+(0.0335062*ptmin[i]))/(1.+(0.0304598*ptmin[i]))) 
	   << " " << 2.0*SFb_err_T[0] << std::endl;
    }else if(i < 17){
      ofs3 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.869965*((1.+(0.0335062*(0.5*ptmin[i+1]+0.5*ptmin[i])))/(1.+(0.0304598*(0.5*ptmin[i+1]+0.5*ptmin[i])))) 
	   << " " << SFb_err_T[i-1] << std::endl;
    }else{
      ofs3 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.869965*((1.+(0.0335062*ptmin[i]))/(1.+(0.0304598*ptmin[i]))) 
	   << " " << 2.0*SFb_err_T[15] << std::endl;
    }
  }
  
  ofs3.close();
  

  std::ofstream ofs4 ("Ceff_SF_CSVL_cpena.txt", std::ofstream::out);
  
  for(int i = 0; i < 18;i++){
    if(i == 0){
      ofs4 << 1.0 << " "  << 0.0 << " " 
	   << 0.981149*((1.+(-0.000713295*ptmin[i]))/(1.+(-0.000703264*ptmin[i]))) << " " << 4.0*SFb_err_L[0] << std::endl;
    }else if( i < 17){
      ofs4 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.981149*((1.+(-0.000713295*(0.5*ptmin[i+1]+0.5*ptmin[i])))/(1.+(-0.000703264*(0.5*ptmin[i+1]+0.5*ptmin[i])))) 
	   << " " << 2.0*SFb_err_L[i-1] << std::endl;
    }else{
      ofs4 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.981149*((1.+(-0.000713295*ptmin[i]))/(1.+(-0.000703264*ptmin[i]))) << " " << 4.0*SFb_err_L[15] << std::endl;
    }
  }
  
  ofs4.close();
  std::ofstream ofs5 ("Ceff_SF_CSVM_cpena.txt", std::ofstream::out);
  std::cout << "==============================================" << std::endl;
  for(int i = 0; i < 18;i++){
    if(i == 0){
      ofs5 << 1.0 << " "  << 0.0 << " " 
	   << 0.726981*((1.+(0.253238*ptmin[i]))/(1.+(0.188389*ptmin[i]))) << " " << 4.0*SFb_err_M[0] << std::endl;
    }else if (i < 17){
      ofs5 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.726981*((1.+(0.253238*(0.5*ptmin[i+1]+0.5*ptmin[i])))/(1.+(0.188389*(0.5*ptmin[i+1]+0.5*ptmin[i])))) 
	   << " " << 2.0*SFb_err_M[i-1] << std::endl;
    }else{
      ofs5 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.726981*((1.+(0.253238*ptmin[i]))/(1.+(0.188389*ptmin[i]))) 
	   << " " << 4.0*SFb_err_M[15] << std::endl;
    }
    
  }
  ofs5.close();
  std::ofstream ofs6 ("Ceff_SF_CSVT_cpena.txt", std::ofstream::out);
  std::cout << "=============================================="<< std::endl;
  for(int i = 0; i < 18;i++){
    if(i == 0){
      ofs6 << 1.0 << " "  << 0.0 << " " 
	   << 0.869965*((1.+(0.0335062*ptmin[i]))/(1.+(0.0304598*ptmin[i]))) 
	   << " " << 4.0*SFb_err_T[0] << std::endl;
    }else if(i < 17){
      ofs6 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.869965*((1.+(0.0335062*(0.5*ptmin[i+1]+0.5*ptmin[i])))/(1.+(0.0304598*(0.5*ptmin[i+1]+0.5*ptmin[i])))) 
	   << " " << 2.0*SFb_err_T[i-1] << std::endl;
    }else{
      ofs6 << ptmin[i] << " "  << 0.0 << " " 
	   << 0.869965*((1.+(0.0335062*ptmin[i]))/(1.+(0.0304598*ptmin[i]))) 
	   << " " << 4.0*SFb_err_T[15] << std::endl;
    }
  }
  
  ofs6.close();


  //Light Quark Scale Factors
  float ptmin_Heta[] = {20, 20, 30, 40, 50, 60, 70, 80, 100, 120, 160, 210, 260, 320, 400, 500, 600, 700};//High Eta

  std::ofstream ofs7 ("Leff_SF_CSVL_cpena.txt", std::ofstream::out);
  TF1* sfL;//Loose CSV, eta (0.0, 0.5), (0.5, 1.0), (1.0, 1.5), (1.5, 2.4)
  TF1* sfLmin;
  TF1* sfLmax;
  
  TF1* sfM;//Medium CSV, eta (0.0, 0.8), (0.8, 1.6), (1.6, 2.4)
  TF1* sfMmax;
  TF1* sfT;//Tight CSV, eta (0.0, 2.4)
  TF1* sfTmax;
  
  //sfL
  float sfL_etamin[] = {0.0, 0.5, 1.0, 1.5, 2.4};
  
  for(int i = 0; i < 4; i++){
    sfL = GetSFlmean("CSV","L", sfL_etamin[i], sfL_etamin[i+1], "ABCD");
    sfLmin = GetSFlmin("CSV","L", sfL_etamin[i], sfL_etamin[i+1], "ABCD");
    sfLmax = GetSFlmax("CSV","L", sfL_etamin[i], sfL_etamin[i+1], "ABCD");
    for(int j = 0; j < 18; j ++){
      if(j == 0){
	ofs7 << 1.0 << " "  << sfL_etamin[i] << " "
	     << sfL->Eval(ptmin[j])
	     << " " << 2.0*(sfLmax->Eval(ptmin[j])-sfL->Eval(ptmin[j])) << " " << std::endl;
      }else if(j < 17){
	ofs7 << ptmin[j] << " "  << sfL_etamin[i] << " "
	     << sfL->Eval(0.5*ptmin[j+1]+0.5*ptmin[j])
	     << " " << sfLmax->Eval(0.5*ptmin[j+1]+0.5*ptmin[j])-sfL->Eval(0.5*ptmin[j+1]+0.5*ptmin[j]) << std::endl;
      }else{
	if(sfL_etamin[i] == 1.5){
	  ofs7 << ptmin_Heta[j] << " "  << sfL_etamin[i] << " "
	       << sfL->Eval(ptmin_Heta[j])
	       << " " << 2.0*(sfLmax->Eval(ptmin[j])-sfL->Eval(ptmin[j])) << " " << std::endl;
	}else{
	  ofs7 << ptmin[j] << " "  << sfL_etamin[i] << " "
               << sfL->Eval(ptmin[j])
               << " " << 2.0*(sfLmax->Eval(ptmin[j])-sfL->Eval(ptmin[j])) << " " << std::endl;
	}
      }
    }
    delete sfL;
    delete sfLmin;
    delete sfLmax;
  }
  
  ofs7.close();
  
  std::ofstream ofs8 ("Leff_SF_CSVM_cpena.txt", std::ofstream::out);
  double sfM_etamin[] = {0.0, 0.8, 1.6, 2.4};
  
  for(int i = 0; i < 3; i++){
    sfM = GetSFlmean("CSV","M", sfM_etamin[i], sfM_etamin[i+1], "ABCD");
    sfMmax = GetSFlmax("CSV","M", sfM_etamin[i], sfM_etamin[i+1], "ABCD");
    for(int j = 0; j < 18; j ++){
      if(j == 0){
	ofs8 << 1.0 << " "  << sfM_etamin[i] << " "
	     << sfM->Eval(ptmin[j])
	     << " " << 2.0*(sfMmax->Eval(ptmin[j])-sfM->Eval(ptmin[j])) << " " << std::endl;
      }else if(j < 17){
	ofs8 << ptmin[j] << " "  << sfM_etamin[i] << " "
	     << sfM->Eval(0.5*ptmin[j+1]+0.5*ptmin[j])
	     << " " << sfMmax->Eval(0.5*ptmin[j+1]+0.5*ptmin[j])-sfM->Eval(0.5*ptmin[j+1]+0.5*ptmin[j]) << std::endl;
      }else{
	std::cout << "etamin: " << sfM_etamin[i] << std::endl;
	if(sfM_etamin[i] == 1.6){
	  std::cout << "HERE" << std::endl;
	  ofs8 << ptmin_Heta[j] << " "  << sfM_etamin[i] << " "
	       << sfM->Eval(ptmin_Heta[j])
	       << " " << 2.0*(sfMmax->Eval(ptmin[j])-sfM->Eval(ptmin[j])) << " " << std::endl;
	}else{
	  ofs8 << ptmin[j] << " "  << sfM_etamin[i] << " "
               << sfM->Eval(ptmin[j])
               << " " << 2.0*(sfMmax->Eval(ptmin[j])-sfM->Eval(ptmin[j])) << " " << std::endl;
	}
      }
    }
    delete sfM;
    delete sfMmax;
  }
  
  ofs8.close();
  
  std::ofstream ofs9 ("Leff_SF_CSVT_cpena.txt", std::ofstream::out);
  float sfT_etamin[] = {0.0, 2.4};
  
  for(int i = 0; i < 1; i++){
    sfT = GetSFlmean("CSV","T", sfT_etamin[i], sfT_etamin[i+1], "ABCD");
    sfTmax = GetSFlmax("CSV","T", sfT_etamin[i], sfT_etamin[i+1], "ABCD");
    for(int j = 0; j < 18; j ++){
      if(j == 0){
        ofs9 << 1.0 << " "  << sfT_etamin[i] << " "
             << sfT->Eval(ptmin[j])
             << " " << 2.0*(sfTmax->Eval(ptmin[j])-sfT->Eval(ptmin[j])) << " " << std::endl;
      }else if(j < 17){
        ofs9 << ptmin[j] << " "  << sfT_etamin[i] << " "
             << sfT->Eval(0.5*ptmin[j+1]+0.5*ptmin[j])
             << " " << sfTmax->Eval(0.5*ptmin[j+1]+0.5*ptmin[j])-sfT->Eval(0.5*ptmin[j+1]+0.5*ptmin[j]) << std::endl;
      }else{
        if(sfT_etamin[i] == 1.5 || sfT_etamin[i] == 1.6){
          ofs9 << ptmin_Heta[j] << " "  << sfT_etamin[i] << " "
               << sfT->Eval(ptmin[j])
               << " " << 2.0*(sfTmax->Eval(ptmin[j])-sfT->Eval(ptmin[j])) << " " << std::endl;
        }else{
          ofs9 << ptmin[j] << " "  << sfT_etamin[i] << " "
               << sfT->Eval(ptmin[j])
               << " " << 2.0*(sfTmax->Eval(ptmin[j])-sfT->Eval(ptmin[j])) << " " << std::endl;
        }
      }
    }
    delete sfT;
    delete sfTmax;
  }

  ofs9.close();

  
  return 0;
}



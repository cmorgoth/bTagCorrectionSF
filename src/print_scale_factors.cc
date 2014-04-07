{

  gROOT->Reset();
  float ptmin[] = {20, 30, 40, 50, 60, 70, 80, 100, 120, 160, 210, 260, 320, 400, 500, 600};
  
  for(int i = 0; i < 16;i++){
    std::cout << "CSVL: " << 0.997942*((1.+(0.00923753*ptmin[i]))/(1.+(0.0096119*ptmin[i]))) << std::endl;
    //std::cout << "CSVL: " << (0.938887+(0.00017124*ptmin[i]))+(-2.76366e-07*(ptmin[i]*ptmin[i])) << std::endl;
    //std::cout << "CSVL: " << (0.927563+(1.55479e-05*ptmin[i]))+(-1.90666e-07*(ptmin[i]*ptmin[i])) << std::endl;
  }
  
  std::cout << "==============================================" << std::endl;
  for(int i = 0; i < 16;i++){
    std::cout << "CSVM: " << (0.938887+(0.00017124*ptmin[i]))+(-2.76366e-07*(ptmin[i]*ptmin[i])) << std::endl;
  }
  std::cout << "=============================================="<< std::endl;
  for(int i = 0; i < 16;i++){
    std::cout << "CSVT: " << (0.927563+(1.55479e-05*ptmin[i]))+(-1.90666e-07*(ptmin[i]*ptmin[i])) << std::endl; 
  }
}

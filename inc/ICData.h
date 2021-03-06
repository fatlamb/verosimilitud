#ifndef __ICDATA_H_INCLUDED__
#define __ICDATA_H_INCLUDED__

#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <fstream>
#include "Tensor.h"

class ICData {
public:
  ICData(Tensor *t_eprox_edges, Tensor *t_cosz_edges);
  ~ICData();

  void ReadCSV(void);
  void OpenCSV(std::string filename);
  void BinData(std::vector<unsigned int> *eprox_binned,
               std::vector<unsigned int> *cosz_binned);
  void BinData(Tensor *binned_data);

private:
  std::ifstream datafile;
  std::vector<double> cosz;
  std::vector<double> eprox;
  const unsigned int CosZenithBins = 11;
  const unsigned int EnergyProxyBins = 50;
  std::vector<double> *cosz_edges;
  std::vector<double> *eprox_edges;
};

#endif // __ICDATA_H_INCLUDED__

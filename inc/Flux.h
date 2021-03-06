#ifndef __FLUX_H_INCLUDED__
#define __FLUX_H_INCLUDED__

class Flux {

public:
  Flux(double arg_normalization, double arg_index);
  double EvaluatePowerlawFlux(double neutrinoEnergy);
  double IntegratePowerlawFlux(double minEnergy, double maxEnergy);
  void SetNormalization(double arg_normalization);
  void SetIndex(double arg_index);
  double GetNormalization(void);
  double GetIndex(void);

private:
  double normalization;
  double index;
};
#endif // __FLUX_H_INCLUDED__

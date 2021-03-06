#ifndef BristolNTupleCaloJetsExtra
#define BristolNTupleCaloJetsExtra

#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"


class BristolNTuple_CaloJets : public edm::EDProducer {
 public:
  explicit BristolNTuple_CaloJets(const edm::ParameterSet&);

 private:
  void produce( edm::Event &, const edm::EventSetup & );
  const edm::InputTag   inputTag;
  const std::string     prefix,suffix;
  const unsigned int    maxSize;
  const std::string jecUncPath;
  const bool readJECuncertainty;
};

#endif

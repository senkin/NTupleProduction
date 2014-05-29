#ifndef BristolNTupleTriggerObjects
#define BristolNTupleTriggerObjects
#include <string>

#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "HLTrigger/HLTcore/interface/HLTConfigProvider.h"

class BristolNTuple_TriggerObjects : public edm::EDProducer {
 public:
  explicit BristolNTuple_TriggerObjects(const edm::ParameterSet&);

 private:
  void produce( edm::Event &, const edm::EventSetup & );
  void beginRun( edm::Run &, const edm::EventSetup & );
  //unsigned int findTrigger(const std::string& triggerWildCard);

  const edm::InputTag   hltObjectsInputTag, hltObjectOfInterest;
  HLTConfigProvider hltConfig;
  const std::string     prefix, suffix;
};

#endif

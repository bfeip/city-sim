#ifndef TECHNOLOGY_HPP
#define TECHNOLOGY_HPP

class Technology : public DescribedObject {
private:
  std::vector<const Technolgy&> prereqs;
  bool invented;
  DateTime invented_in;
public:
  Technology() = default;
  Technology(const std::string& name, const std::string& desc) :
    DescribedObject(name, desc) {}
  Technology(const std::string& name, const std::string& desc,
	     const std::vector<const Technology&>& prereqs) :
    DescribedObject(name, desc), prereqs(prereqs) {}
  ~Technology() = default;

  const std::vector<const Technology&>& getPrereqs() const { return prereqs; }
  bool hasPrereq(const Technology& tech) const;

  void setPrereqs(const std::vector<const Technology&> techs) {
    prereqs = techs;
  }
  void invent(const DateTime& date);
};

#endif

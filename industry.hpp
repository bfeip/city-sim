#ifndef INDUSTRY_HPP
#define INDUSTRY_HPP

class Industry : public DescribedObject {
private:
  std::vector<const Technology&> required_tech;
public:
  Industry = default;
  Industry(const std::string& name, const std::string& desc) :
    DescribedObject(name, desc) {}
  Industry(const std::string& name, const std::string& desc,
	   const std::vector<const Technolgy&>& required_tech) :
    DescribedObject(name, desc), required_tech(required_tech) {}
  ~Industry() = default;

  const std::vector<const Technology&>& getRequiredTech() const {
    return required_tech;
  }
  bool techIsRequired(const Technology&) const;

  void setRequiredTech(const std::vector<const Technology&>& techs) {
    required_tech = techs;
  }
  void addRequiredTech(const Technology& tech) {
    required_tech.push_back(tech);
  }
};

#endif

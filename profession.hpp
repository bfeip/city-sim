#ifndef PROFESSION_HPP
#define PROFESSION_HPP

class Profession : public DescribedObject {
private:
  std::vector<const Industry&> works_in;
public:
  Profession() = default;
  Profession(const std::string& name, const std::string& desc) :
    DescribedObject(name, desc) {}
  ~Profession() = default;
  
  const std::vector<const Industry&>& getWorksIn() const { return works_in; }
  bool worksIn(const Industry& ind) const;

  void setWorksIn(const std::vector<const Industry&>& inds) {
    words_in = inds;
  }
  void addWorksIn(const Industry& ind) { works_in.push_back(ind); }
};

#endif

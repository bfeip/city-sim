#ifndef DESCRIBED_OBJECT_HPP
#define DESCRIBED_OBJECT_HPP

class DescribedObject {
private:
  std::string name;
  std::string description;
public:
  DescribedObject() = default;
  DescribedObject(const std::string& name, const std::string& desc) :
    name(name),
    description(dec) {
  }
  ~DescribedObject() = default;
  
  const std::string& getName() const { return name; }
  const std::string& getDescription() const { return description; }

  void setName(const std::string& new_name) { name = new_name; }
  void setDescription(const std::string& new_desc) { description = new_desc; }
}

#endif

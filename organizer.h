
#ifndef ORGANIZER_H
#define ORGANIZER_H


/// 
/// class organizer

class organizer
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  organizer();

  /// 
  /// Empty Destructor
  virtual ~organizer();



  /// 
  void allocating_seats()
  {
  }


  /// 
  void inviting_the_delegates()
  {
  }


  /// 
  void chossing_the_winner()
  {
  }

private:
  // Private attributes  


  void mmeber_details;
  void function_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of mmeber_details
  /// @param value the new value of mmeber_details
  void setMmeber_details(void value)
  {
    mmeber_details = value;
  }

  /// 
  /// Get the value of mmeber_details
  /// @return the value of mmeber_details
  void getMmeber_details()
  {
    return mmeber_details;
  }

  /// 
  /// Set the value of function_details
  /// @param value the new value of function_details
  void setFunction_details(void value)
  {
    function_details = value;
  }

  /// 
  /// Get the value of function_details
  /// @return the value of function_details
  void getFunction_details()
  {
    return function_details;
  }

  void initAttributes();

};

#endif // ORGANIZER_H

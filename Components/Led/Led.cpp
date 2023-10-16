// ======================================================================
// \title  Led.cpp
// \author najjar
// \brief  cpp file for Led component implementation class
// ======================================================================


#include <Components/Led/Led.hpp>
#include <FpConfig.hpp>

namespace Components {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

 Led ::Led(const char* const compName) : LedComponentBase(compName),
    state(Fw::On::OFF), // added all the params needed for LED blinker
    transitions(0),
    count(0),
    blinking(false)
{

}

  Led ::
    ~Led()
  {

  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void Led ::
    TODO_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

} // end namespace Components

#pragma once

#include <MshIO/MshSpec.h>

#include <ostream>

namespace mshio {

void save_curves(std::ostream& out, const MshSpec& spec);

}

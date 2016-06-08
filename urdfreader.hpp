#ifndef URDFREADER_HPP_
#define URDFREADER_HPP_
#include <urdf_model/model.h>
#include <urdf_parser/urdf_parser.h>
#include <rbdl/rbdl.h>
#include <rbdl/rbdl_eigenmath.h>
#include <stack>
#include <iostream>
#include <fstream>

namespace shared {

typedef boost::shared_ptr<urdf::Joint> JointPtr;
typedef boost::shared_ptr<urdf::Link> LinkPtr;
typedef boost::shared_ptr<urdf::ModelInterface> ModelPtr;
typedef const boost::shared_ptr<const urdf::Link> ConstLinkPtr;
typedef std::map<std::string, LinkPtr > URDFLinkMap;
typedef std::map<std::string, JointPtr > URDFJointMap;

bool URDFReadFromFile (const char* filename, RigidBodyDynamics::Model* model, bool floating_base, bool verbose = false);

bool URDFReadFromString (const char* model_xml_string, RigidBodyDynamics::Model* model, bool floating_base, bool verbose = false);

}

#endif
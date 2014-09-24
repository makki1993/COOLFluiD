// Copyright (C) 2012 von Karman Institute for Fluid Dynamics, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#include "Common/CFLog.hh"
#include "Environment/ObjectProvider.hh"

#include "Framework/NullPhysicalModelImpl.hh"
#include "Framework/Framework.hh"

//////////////////////////////////////////////////////////////////////////////

using namespace std;

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace Framework {

//////////////////////////////////////////////////////////////////////////////

Environment::ObjectProvider<NullPhysicalModelImpl,
               PhysicalModelImpl,
               FrameworkLib,
               1>
nullPhysicalModelImplProvider("Null");

//////////////////////////////////////////////////////////////////////////////

NullPhysicalModelImpl::NullPhysicalModelImpl(const std::string& name)
  : PhysicalModelImpl(name)
{
}

//////////////////////////////////////////////////////////////////////////////

NullPhysicalModelImpl::~NullPhysicalModelImpl()
{
}

//////////////////////////////////////////////////////////////////////////////

void NullPhysicalModelImpl::configure ( Config::ConfigArgs& args )
{
  ConfigObject::configure(args);
}

//////////////////////////////////////////////////////////////////////////////

CFuint NullPhysicalModelImpl::getDimension() const
{
  return 1;
}

//////////////////////////////////////////////////////////////////////////////

CFuint NullPhysicalModelImpl::getNbEquations() const
{
  return 1;
}

//////////////////////////////////////////////////////////////////////////////

bool NullPhysicalModelImpl::validate(const State& state) const
{
  return true;
}

//////////////////////////////////////////////////////////////////////////////

std::string NullPhysicalModelImpl::getConvectiveName() const
{
  return "Null";
}

//////////////////////////////////////////////////////////////////////////////

std::string NullPhysicalModelImpl::getDiffusiveName() const
{
  return "Null";
}

//////////////////////////////////////////////////////////////////////////////

std::string NullPhysicalModelImpl::getSourceName() const
{
  return "Null";
}

//////////////////////////////////////////////////////////////////////////////

void NullPhysicalModelImpl::computePhysicalData()
{
  CFLog(NOTICE, "NullPhysicalModelImpl::computePhysicalData() called\n");
}

//////////////////////////////////////////////////////////////////////////////

void NullPhysicalModelImpl::setReferenceValues()
{
  CFLog(NOTICE, "NullPhysicalModelImpl::setReferenceValues() called\n");
}

//////////////////////////////////////////////////////////////////////////////

  } // namespace Framework

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////

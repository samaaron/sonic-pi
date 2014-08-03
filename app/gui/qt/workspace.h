//--
// This file is part of Sonic Pi: http://sonic-pi.net
// Full project source: https://github.com/samaaron/sonic-pi
// License: https://github.com/samaaron/sonic-pi/blob/master/LICENSE.md
//
// Copyright 2013, 2014 by Sam Aaron (http://sam.aaron.name).
// All rights reserved.
//
// Permission is granted for use, copying, modification, distribution,
// and distribution of modified versions of this work as long as this
// notice is included.
//++

#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <vector>

class Workspace
{
	static std::vector<Workspace const *> instances;

 public:
	Workspace();
	~Workspace();
	static void enumerate(void);
	Workspace(Workspace const &);
};

#endif

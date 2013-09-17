/*
 * @(#) Population.h   1.0   Sep 1, 2013
 *
 * Titus Cieslewski (dev@titus-c.ch)
 *
 * The ROBOGEN Framework
 * Copyright © 2013-2014
 *
 * Laboratory of Intelligent Systems, EPFL
 *
 * This file is part of the ROBOGEN Framework.
 *
 * The ROBOGEN Framework is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License (GPL)
 * as published by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @(#) $Id$
 */

#ifndef POPULATION_H_
#define POPULATION_H_

#include <vector>
#include <utility>
#include <stdexcept>
#include <boost/shared_ptr.hpp>
#include <boost/random/mersenne_twister.hpp>
#include "evolution/engine/IndividualContainer.h"
#include "evolution/representation/RobotRepresentation.h"
#include "utils/network/TcpSocket.h"

// enable the following to perform body mutation:
// #define BODY_MUTATION

namespace robogen {

class PopulationException : public std::runtime_error {
public:
	PopulationException(const std::string& w);
};

class Population : public IndividualContainer {
public:
	/**
	 * Constructs a population from a given robot body, keeping the body
	 * constant, but randomly initializing the brain.
	 * @param robot Reference robot body
	 * @param popSize chosen size for population
	 * @param rng boost random number generator for diverse purposes
	 */
	Population(RobotRepresentation &robot, int popSize, boost::random::mt19937
			&rng);

	/**
	 * Creates a population from the popSize best individuals of origin.
	 */
	Population(const IndividualContainer &origin, unsigned int popSize);

	virtual ~Population();

	/**
	 * @return Best robot of the population
	 */
	RobotRepresentation &best();

	/**
	 * Sets the passed references to best, average and standard deviation.
	 * Requires the population to be evaluated.
	 */
	void getStat(double &best, double &average, double &stdev) const;
};

} /* namespace robogen */
#endif /* POPULATION_H_ */

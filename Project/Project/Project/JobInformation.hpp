#ifndef JOBINFORMATION_HPP
# define JOBINFORMATION_HPP

# include "GetJobList.hpp"

class JobInformation
{
private:
public:
	static JobPosting *getJobPostingDetails(std::string input);
};

#endif
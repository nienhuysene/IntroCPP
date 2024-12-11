#ifndef EPSTRING_SOLUTION_H
#define EPSTRING_SOLUTION_H

#include <vector>
#include <string>
namespace ep
{
    // split InString at each occurance of Sep, return parts (excluding Sep)
    std::vector<std::string> splitString(std::string InString, char Sep)
    {
        std::vector<std::string> parts;
        auto current = InString;
        while (current.find(Sep) !=std::string::npos)
        {
            auto pos = current.find(Sep);
            parts.push_back(current.substr(0, pos));
            current = current.substr(pos + 1);
        }
        parts.push_back(current);
        return parts;
    }

    // true if Search is part of InString
    bool contains(const std::string InString, const std::string Search)
    {
        return InString.find(Search) != std::string::npos;
    }

    // returns the part of the InString after Mark, empty string if Mark not contained
    std::string after(const std::string InString, const std::string Mark)
    {
        if (not contains(InString, Mark))
            return "";
        return InString.substr(InString.find(Mark) + Mark.length());
    }

    // returns the part of the InString before Mark, whole string if Mark not contained
    std::string before(const std::string InString, const std::string Mark)
    {
        if (not contains(InString, Mark))
            return InString;
        return InString.substr(0, InString.find(Mark));
    }

    // returns the part of the InString between the end of Front and before the beginning of Back
    // empty string if either front or back not contained
    std::string inBetween(const std::string InString, const std::string Front, const std::string Back)
    {
        return before(after(InString, Front), Back);
    }

}

#endif
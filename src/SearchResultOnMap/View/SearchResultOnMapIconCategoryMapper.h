// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#pragma once

#include <string>
#include <map>
#include "Search.h"
#include "ISearchResultOnMapIconCategoryMapper.h"
#include "Types.h"

namespace ExampleApp
{
    namespace SearchResultOnMap
    {
        namespace View
        {
            class SearchResultOnMapIconCategoryMapper : public ISearchResultOnMapIconCategoryMapper, private Eegeo::NonCopyable
            {
                std::map<std::string, int> m_categoryToIconIndex;

            public:
                SearchResultOnMapIconCategoryMapper();

                ~SearchResultOnMapIconCategoryMapper();

                int GetIconIndexFromSearchResult(const Search::SdkModel::SearchResultModel& searchResultModel) const;
            };
        }
    }
}
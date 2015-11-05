// Copyright eeGeo Ltd (2012-2015), All Rights Reserved

#pragma once

#include "ApplicationConfig.h"
#include "IApplicationConfigurationBuilder.h"
#include "Types.h"

namespace ExampleApp
{
    namespace ApplicationConfig
    {
        namespace SdkModel
        {
            class ApplicationConfigurationBuilder : public IApplicationConfigurationBuilder, private Eegeo::NonCopyable
            {
                std::string m_name;
                Eegeo::Space::LatLongAltitude m_interestLocation;
                float m_distanceToInterestMetres;
                float m_orientationDegrees;
                bool m_tryStartAtGpsLocation;
                std::string m_googleAnalyticsReferrerToken;
                std::string m_buildVersion;
                
            public:
                ApplicationConfigurationBuilder(const std::string& buildVersion);
                
                IApplicationConfigurationBuilder& SetApplicationName(const std::string& name);
                
                IApplicationConfigurationBuilder& SetStartInterestPointLocation(const Eegeo::Space::LatLongAltitude& location);
                
                IApplicationConfigurationBuilder& SetStartDistanceFromInterestPoint(float distanceMetres);
                
                IApplicationConfigurationBuilder& SetStartOrientationAboutInterestPoint(float degrees);
                
                IApplicationConfigurationBuilder& SetTryStartAtGpsLocation(bool tryStartAtGpsLocation);
                
                IApplicationConfigurationBuilder& SetGoogleAnalyticsReferrerToken(const std::string& googleAnalyticsReferrerToken);
                
                ApplicationConfiguration Build();
            };
        }
    }
}

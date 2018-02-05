// Copyright eeGeo Ltd (2012-2016), All Rights Reserved

#pragma once
#include "DeepLink.h"
#include "CameraTransitions.h"
#include "ApplicationConfig.h"
#include "IAlertBoxFactory.h"
#include "IWebLoadRequestFactory.h"
#include "CoverageTrees.h"
#include "CityThemes.h"
#include "InteriorMenuObserver.h"
#include "ISearchQueryPerformer.h"
#include "AboutPageViewModel.h"
#include "Location.h"
#include "AppModes.h"
#include "IFlattenButtonModel.h"
#include "SelectFirstResultSearchService.h"

namespace ExampleApp
{
    namespace DeepLink
    {
        namespace SdkModel
        {
            class DeepLinkModule: private Eegeo::NonCopyable
            {
            public:

                DeepLinkModule(
                    CameraTransitions::SdkModel::ICameraTransitionController& cameraTransitionController,
                    Eegeo::Web::IWebLoadRequestFactory& webFactory,
                    Eegeo::UI::NativeAlerts::IAlertBoxFactory& alertBoxFactory,
                    ApplicationConfig::ApplicationConfiguration& defaultConfig,
                    Eegeo::Streaming::CoverageTrees::ICoverageTreeManifestLoader& manifestLoader,
                    Eegeo::Streaming::CoverageTrees::CoverageTreeManifestNotifier& manifestNotifier,
                    Eegeo::Resources::CityThemes::CityThemeLoader& cityThemeLoader,
                    Eegeo::Resources::CityThemes::ICityThemesService& cityThemeService,
                    Search::SdkModel::InteriorMenuObserver& interiorMenuObserver,
                    Search::SdkModel::ISearchQueryPerformer& searchQueryPerformer,
                    AboutPage::View::IAboutPageViewModel& aboutPageViewModule,
                    Eegeo::Location::NavigationService& navigationService,
                    Eegeo::Web::ApiTokenService& apiTokenService,
                    Eegeo::Resources::Interiors::InteriorSelectionModel& interiorSelectionModel,
                    const ExampleApp::AppModes::SdkModel::IAppModeModel& appModeModel,
                    FlattenButton::SdkModel::IFlattenButtonModel& flattenButtonModel,
                    Search::SelectFirstResult::SdkModel::SelectFirstResultSearchService& selectFirstResultSearchService);

                ~DeepLinkModule();
                DeepLinkController& GetDeepLinkController();
            private:
                DeepLinkModel* m_pDeepLinkModel;
                DeepLinkController* m_pDeepLinkController;
            };
        }
    }
}

#include "WeeklyTimerCampaignRequirement.h"

FTimespan UWeeklyTimerCampaignRequirement::GetWeeklyTimeLeft(AFSDPlayerController* Player) const {
    return FTimespan{};
}

FTimespan UWeeklyTimerCampaignRequirement::GetTimeUntillNewCampaign(AFSDPlayerController* Player) const {
    return FTimespan{};
}

bool UWeeklyTimerCampaignRequirement::GetHasCompleted(UCampaign* Campaign, AFSDPlayerController* Player) const {
    return false;
}

UWeeklyTimerCampaignRequirement::UWeeklyTimerCampaignRequirement() {
}


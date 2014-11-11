//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

#import "UIAlertViewDelegate.h"

@class SBIcon;

@interface SBDeleteIconAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    SBIcon *_icon;
    BOOL _checkedDocumentsInCloudState;
    BOOL _appHasDocumentsInCloud;
    BOOL _appHasDocumentsWithPendingUpdates;
    BOOL _askedUserAboutDocumentsDocumentsInCloud;
    BOOL _askedUserAboutDocumentsWithPendingUpdates;
}

- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)_checkDocumentsInCloudStateIfNeeded;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)icon;
- (void)dealloc;
- (id)initWithIcon:(id)arg1;

@end


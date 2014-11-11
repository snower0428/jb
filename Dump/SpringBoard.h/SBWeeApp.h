//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBWeeAppController.h"
#import "BBWeeAppControllerHost.h"

@class NSString, UIViewController<BBWeeAppPresentationController>;

@interface SBWeeApp : NSObject <BBWeeAppController, BBWeeAppControllerHost>
{
    id <BBWeeAppController> _weeAppController;
    NSString *_sectionID;
    id <SBWeeAppDelegate> _delegate;
    int _presentationMode;
    UIViewController<BBWeeAppPresentationController> *_presentationController;
    BOOL _sentWillAppear;
    struct {
        unsigned int viewHeight:1;
        unsigned int viewWillAppear:1;
        unsigned int viewDidAppear:1;
        unsigned int viewWillDisappear:1;
        unsigned int viewDidDisappear:1;
        unsigned int willRotate:1;
        unsigned int willAnimateRotation:1;
        unsigned int didRotate:1;
        unsigned int loadPlaceholderView:1;
        unsigned int loadFullView:1;
        unsigned int unloadView:1;
        unsigned int launchURL:1;
        unsigned int launchURLForTapLocation:1;
        unsigned int clearSnapshotImage:1;
        unsigned int host:1;
    } _weeAppFlags;
}

@property(nonatomic) int presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) id <SBWeeAppDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (BOOL)weeApp:(id)arg1 updatePresentationMode:(int)arg2 duration:(float)arg3 delay:(float)arg4;
- (int)weeAppPresentationMode:(id)arg1;
- (BOOL)weeAppWantsNotificationCenterDismissal:(id)arg1;
- (void)weeAppWantsSizeUpdate:(id)arg1;
- (id)presentationControllerForMode:(int)arg1;
- (void)unloadPresentationController;
- (id)currentPresentationController;
- (float)presentationHeight;
- (void)setPresentationView:(id)arg1;
- (void)clearShapshotImage;
- (id)launchURLForTapLocation:(struct CGPoint)arg1;
- (BOOL)wantsTaps;
- (void)unloadView;
- (void)loadFullView;
- (void)loadPlaceholderView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (float)viewHeight;
- (id)view;
- (id)description;
- (void)dealloc;
- (id)initWithWeeAppController:(id)arg1 sectionID:(id)arg2;

// Remaining properties
@property(nonatomic) id <BBWeeAppControllerHost> host;

@end


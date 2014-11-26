//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedViewController.h"

#import "IGCoreTextLinkHandler.h"

@class IGUser, NSString;

@interface IGUsertagFeedViewController : IGFeedViewController <IGCoreTextLinkHandler>
{
    int _photoCount;
    IGUser *_user;
}

@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)introPeriodHeaderViewWithExpirationDate:(id)arg1;
- (void)onSettingsButtonTapped;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)updateNetworkSource;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


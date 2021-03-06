//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewDragRefreshDelegate.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface OSContentShowDelegate : TTTableViewDragRefreshDelegate
{
    NSURL *iTunesURL;
}

@property(retain, nonatomic) NSURL *iTunesURL; // @synthesize iTunesURL;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)openReferralURL:(id)arg1;
- (void)gotoITunes:(id)arg1;

@end


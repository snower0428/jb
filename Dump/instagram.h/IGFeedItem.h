//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPost.h"

#import "IGHeaderFeedItem.h"
#import "IGStoredObject.h"

@class CLLocation, IGDate, IGLocation, IGSponsoredPostInfo, IGUser, IGUsertagGroup, NSString;

@interface IGFeedItem : IGPost <IGStoredObject, IGHeaderFeedItem>
{
    BOOL _seen;
    BOOL _isHidden;
    BOOL _inPhotosOfYou;
    NSString *_permalink;
    IGUsertagGroup *_usertags;
    IGSponsoredPostInfo *_sponsoredPostInfo;
    NSString *_organicTrackingToken;
    NSString *_exploreAlgorithm;
    NSString *_exploreImpressionToken;
}

+ (id)centralizedStore;
@property(readonly) NSString *exploreImpressionToken; // @synthesize exploreImpressionToken=_exploreImpressionToken;
@property(readonly) NSString *exploreAlgorithm; // @synthesize exploreAlgorithm=_exploreAlgorithm;
- (void).cxx_destruct;
- (id)getMediaId;
- (id)urlToFlagComment:(id)arg1;
- (id)urlToDeleteComment:(id)arg1;
- (id)urlToPostComment;
- (void)performLike:(BOOL)arg1 userDidDoubleTap:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateLocalLikeStatus:(BOOL)arg1;
- (void)setSponsoredPostInfoFromEntry:(id)arg1;
- (BOOL)seen;
- (void)markAsSeen;
- (void)untagCurrentUserWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)addToPhotosOfYou:(BOOL)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)setUsertagsFromEntry:(id)arg1;
@property(retain) IGUsertagGroup *usertags; // @synthesize usertags=_usertags;
- (BOOL)updateWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(copy) NSString *organicTrackingToken; // @synthesize organicTrackingToken=_organicTrackingToken;
@property(readonly) IGSponsoredPostInfo *sponsoredPostInfo; // @synthesize sponsoredPostInfo=_sponsoredPostInfo;
- (void)setSponsoredPostInfo:(id)arg1;
@property(readonly) BOOL inPhotosOfYou; // @synthesize inPhotosOfYou=_inPhotosOfYou;
- (void)setInPhotosOfYou:(BOOL)arg1;
@property BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, copy) NSString *permalink; // @synthesize permalink=_permalink;
- (void)setPermalink:(id)arg1;
- (id)likeText;
- (id)buildMoreCommentsStyledString;
- (id)buildHyperlapseContextString;
- (id)buildExploreContextString;
- (id)buildLikersStyledString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) IGLocation *location;
@property(readonly) CLLocation *mediaCoord;
@property(readonly) Class superclass;
@property(readonly) IGDate *takenAt;
@property(readonly) IGUser *user;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStyledString, IGUser, NSArray, NSString, NSURL;

@interface IGNewsStory : NSObject
{
    int _storyType;
    IGUser *_user;
    NSURL *_profilePictureURL;
    IGStyledString *_styledString;
    NSArray *_mediaDictionaries;
    int _requestCount;
    NSString *_payload;
}

+ (id)regularStoryStyledStringWithText:(id)arg1 links:(id)arg2 timestamp:(int)arg3;
+ (id)followRequestStyledString;
+ (BOOL)isLinkBold:(id)arg1;
+ (id)urlForLinkWithType:(id)arg1 target:(id)arg2;
+ (id)payloadForDictionary:(id)arg1;
+ (int)requestCountForDictionary:(id)arg1;
+ (id)mediaForDictionary:(id)arg1;
+ (id)styledStringForDictionary:(id)arg1;
+ (id)profilePictureURLForDictionary:(id)arg1;
+ (id)userForDictionary:(id)arg1;
+ (int)storyTypeForDictionary:(id)arg1;
@property(copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(nonatomic) int requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSArray *mediaDictionaries; // @synthesize mediaDictionaries=_mediaDictionaries;
@property(retain, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;
@property(retain, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) int storyType; // @synthesize storyType=_storyType;
- (void).cxx_destruct;
- (void)configureWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


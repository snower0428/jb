//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMModel.h"

@class NSString;

@interface AppendComment : TMModel
{
    unsigned int _commentId;
    NSString *_commentTime;
    NSString *_content;
    unsigned int _days;
    NSString *_reply;
}

@property(retain) NSString *reply; // @synthesize reply=_reply;
@property unsigned int days; // @synthesize days=_days;
@property(retain) NSString *content; // @synthesize content=_content;
@property(retain) NSString *commentTime; // @synthesize commentTime=_commentTime;
@property unsigned int commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end


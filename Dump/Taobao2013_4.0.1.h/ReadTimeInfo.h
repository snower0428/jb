//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ReadTimeInfo : NSObject
{
    int sessionType;
    NSString *sessionId;
    unsigned int timeStamp;
    unsigned int unreadCount;
    unsigned int lastMsgTime;
    NSDictionary *dictMsgInfo;
}

@property(retain, nonatomic) NSDictionary *dictMsgInfo; // @synthesize dictMsgInfo;
@property(nonatomic) unsigned int lastMsgTime; // @synthesize lastMsgTime;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(nonatomic) int sessionType; // @synthesize sessionType;
- (void)dealloc;
- (id)init;

@end


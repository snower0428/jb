//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class LastMsgInfo, NSDate, NSNumber, NSSet, NSString, WWMessage;

@interface WWSession : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *autoSyncMsgTimeStamp; // @dynamic autoSyncMsgTimeStamp;
@property(retain, nonatomic) NSDate *createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *draft; // @dynamic draft;
@property(retain, nonatomic) NSNumber *flag; // @dynamic flag;
@property(retain, nonatomic) LastMsgInfo *lastMsgInfo; // @dynamic lastMsgInfo;
@property(retain, nonatomic) NSNumber *latestMemberInfoTimeFlag; // @dynamic latestMemberInfoTimeFlag;
@property(retain, nonatomic) WWMessage *latestMessage; // @dynamic latestMessage;
@property(retain, nonatomic) NSNumber *latestMessageTimeFlag; // @dynamic latestMessageTimeFlag;
@property(retain, nonatomic) NSDate *latestTime; // @dynamic latestTime;
@property(retain, nonatomic) NSSet *members; // @dynamic members;
@property(retain, nonatomic) NSSet *messages; // @dynamic messages;
@property(retain, nonatomic) NSNumber *orderFlag; // @dynamic orderFlag;
@property(retain, nonatomic) NSDate *readLastTime; // @dynamic readLastTime;
@property(retain, nonatomic) NSString *sectionName; // @dynamic sectionName;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *sessionName; // @dynamic sessionName;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;
@property(retain, nonatomic) NSNumber *unreadCount; // @dynamic unreadCount;
@property(retain, nonatomic) NSNumber *unreadFeedCount; // @dynamic unreadFeedCount;
@property(retain, nonatomic) NSNumber *unreadVOIPCount; // @dynamic unreadVOIPCount;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ReguestBuyTogetherDetails : NSObject
{
    NSString *_db_type;
    NSString *_user_id;
    NSString *_order_id;
    NSString *_lottery_type;
    NSString *_issue_id;
    NSString *_dbType;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *issue_id; // @synthesize issue_id=_issue_id;
@property(retain, nonatomic) NSString *lottery_type; // @synthesize lottery_type=_lottery_type;
@property(retain, nonatomic) NSString *order_id; // @synthesize order_id=_order_id;
@property(retain, nonatomic) NSString *user_id; // @synthesize user_id=_userId;
@property(retain, nonatomic) NSString *db_type; // @synthesize db_type=_dbType;
- (void).cxx_destruct;
- (id)init;

@end


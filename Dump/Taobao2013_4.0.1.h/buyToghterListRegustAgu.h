//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface buyToghterListRegustAgu : NSObject
{
    NSString *_sort;
    NSString *_status;
    NSString *_page;
    NSString *_issue_id;
    NSString *_sort_obj;
    NSString *_lottery_type;
    NSString *_issue;
    int _play_type;
    int page_size;
}

+ (id)createReqWith:(int)arg1:(BOOL)arg2;
+ (id)getExampleAgu;
@property(nonatomic) int play_type; // @synthesize play_type=_play_type;
@property(retain, nonatomic) NSString *lottery_type; // @synthesize lottery_type=_lottery_type;
@property(retain, nonatomic) NSString *sort_obj; // @synthesize sort_obj=_sort_obj;
@property(retain, nonatomic) NSString *issue; // @synthesize issue=_issue;
@property(retain, nonatomic) NSString *issue_id; // @synthesize issue_id=_issue_id;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(nonatomic) int page_size; // @synthesize page_size;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end


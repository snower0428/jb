//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PursueIssueInfo : NSObject
{
    int _index;
    NSString *_issueName;
    NSString *_issueID;
    int _status;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *issueID; // @synthesize issueID=_issueID;
@property(retain, nonatomic) NSString *issueName; // @synthesize issueName=_issueName;
@property(nonatomic) int index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;
- (void)setStatusByString:(id)arg1;

@end

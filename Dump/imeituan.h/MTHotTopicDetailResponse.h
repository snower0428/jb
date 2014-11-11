//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MTHotTopic, NSArray;

@interface MTHotTopicDetailResponse : NSObject <NSCoding>
{
    MTHotTopic *_topic;
    NSArray *_dealArray;
    NSArray *_topicSummaryArray;
    int _count;
}

@property(nonatomic) int count; // @synthesize count=_count;
@property(copy, nonatomic) NSArray *topicSummaryArray; // @synthesize topicSummaryArray=_topicSummaryArray;
@property(copy, nonatomic) NSArray *dealArray; // @synthesize dealArray=_dealArray;
@property(retain, nonatomic) MTHotTopic *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

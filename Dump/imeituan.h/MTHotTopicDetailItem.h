//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class MTHotTopic;

@interface MTHotTopicDetailItem : MTTableViewItem
{
    MTHotTopic *_hotTopic;
}

+ (id)hotTopicDetailItemWithTopic:(id)arg1;
@property(retain, nonatomic) MTHotTopic *hotTopic; // @synthesize hotTopic=_hotTopic;
- (void).cxx_destruct;
- (float)cellHeight;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class NSString;

@interface MTAppViewItem : MTTableViewItem
{
    NSString *_iconURL;
    NSString *_appName;
    NSString *_appURL;
    NSString *_shortDescription;
}

@property(copy, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(copy, nonatomic) NSString *appURL; // @synthesize appURL=_appURL;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (void).cxx_destruct;
- (float)cellHeightWithWidth:(int)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CodeResult : NSObject
{
    NSString *srcUrl;
    int parseType;
    NSString *itemUrl;
}

@property(retain) NSString *itemUrl; // @synthesize itemUrl;
@property int parseType; // @synthesize parseType;
@property(retain) NSString *srcUrl; // @synthesize srcUrl;
- (void).cxx_destruct;
- (id)toString;
- (id)initWithParams:(id)arg1 parseType:(int)arg2 itemUrl:(id)arg3;

@end

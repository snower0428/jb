//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MRecognizerResult : NSObject
{
    NSArray *_nlpIntents;
    NSString *_asrText;
}

+ (id)resultFromJSONString:(id)arg1 error:(id *)arg2;
+ (id)resultFromJSONString:(id)arg1;
@property(retain, nonatomic) NSString *asrText; // @synthesize asrText=_asrText;
@property(retain, nonatomic) NSArray *nlpIntents; // @synthesize nlpIntents=_nlpIntents;
- (id)description;
- (void)dealloc;

@end

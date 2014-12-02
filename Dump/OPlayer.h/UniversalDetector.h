//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UniversalDetector : NSObject
{
    void *detector;
    NSString *charset;
    float confidence;
}

+ (id)detector;
- (unsigned int)encoding;
- (float)confidence;
- (id)MIMECharset;
- (BOOL)done;
- (void)reset;
- (void)analyzeBytes:(const char *)arg1 length:(int)arg2;
- (void)analyzeData:(id)arg1;
- (void)analyzeContentsOfFile:(id)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPBaseCell.h"

@class NSMutableString;

@interface UPPasswordCell : UPBaseCell
{
    NSMutableString *_securityPin;
}

- (BOOL)isLegalLength;
- (void)cleanSecurityPin;
- (id)param;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3;

@end

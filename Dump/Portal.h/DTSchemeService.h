/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTService.h"


@protocol DTSchemeService <DTService>
-(BOOL)handleURL:(id)url userInfo:(id)info;
-(int)indexOfClass:(Class)aClass;
-(void)unregisterHandlerClass:(Class)aClass;
-(BOOL)registerHandlerClass:(Class)aClass atIndex:(int)index;
-(BOOL)registerHandlerClass:(Class)aClass;
-(id)lastURL;
@end


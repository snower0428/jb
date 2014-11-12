/* How to Hook with Logos
Hooks are written with syntax similar to that of an Objective-C @implementation.
You don't need to #include <substrate.h>, it will be done automatically, as will
the generation of a class list and an automatic constructor.
*/

#import <iAd/ADBannerView.h>

@protocol GADBannerViewDelegate <NSObject>
@end

@interface GADBannerView : UIView
@property(nonatomic, assign) NSObject<GADBannerViewDelegate> *delegate;
@end

@interface PlayViewController : UIViewController
@property(retain, nonatomic) ADBannerView *iAdView;
@property(retain, nonatomic) UIView *localAdView;
@end


%hook PlayViewController

- (void)viewWillAppear:(BOOL)arg1
{
    %orig;
    
    GADBannerView *gAdView = MSHookIvar<id>(self, "gAdView");
    gAdView.hidden = YES;
    self.iAdView.hidden = YES;
    self.localAdView.hidden = YES;

    gAdView.delegate = nil;
    
//    NSString *str = [NSString stringWithFormat:@"before:%@\nafter:%@", before, after];
//    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"Hello" message:str delegate:nil
//                                              cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
//    [alertView show];
//    [alertView release];
}

- (void)adViewDidReceiveAd:(id)arg1
{
    NSString *str = [NSString stringWithFormat:@"adViewDidReceiveAd"];
    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"Hello" message:str delegate:nil
                                              cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
    [alertView show];
    [alertView release];
}

%end

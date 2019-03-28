#import <Cordova/CDV.h>
#import <Stripe/Stripe.h>

@import Stripe;

@interface CordovaStripe : CDVPlugin
{
    NSString *merchantId;
    NSString *publishableKey;
    NSString *callbackId;
}
@property (nonatomic, retain) STPAPIClient *client;

- (void) setPublishableKey:(CDVInvokedUrlCommand *) command;
- (void) createCardToken:(CDVInvokedUrlCommand *) command;
- (void) validateCardNumber: (CDVInvokedUrlCommand *) command;
- (void) validateExpiryDate: (CDVInvokedUrlCommand *) command;
- (void) validateCVC: (CDVInvokedUrlCommand *) command;
- (void) getCardType: (CDVInvokedUrlCommand *) command;
- (void) createBankAccountToken: (CDVInvokedUrlCommand *) command;

@end

/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentAuthorizationCoordinatorPrivateDelegate <NSObject>

@optional

- (void)paymentAuthorizationCoordinator:(void *)arg1 didAuthorizePeerPaymentQuote:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, PKAuthorizedPeerPaymentQuote *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAuthorizationResult *, void*
- (void)paymentAuthorizationCoordinator:(void *)arg1 didAuthorizePurchase:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationCoordinator *, PKServiceProviderPurchase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationCoordinator:(void *)arg1 didRequestMerchantSession:(void *)arg2; // needs 2 arg types, found 8: PKPaymentAuthorizationCoordinator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentMerchantSession *, NSError *, void*
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 willFinishWithError:(NSError *)arg2;

@end

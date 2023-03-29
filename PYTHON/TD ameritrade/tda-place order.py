import tda
from tda.orders.equities import equity_buy_limit
import config

order_spec_buy=tda.orders.equities.equity_buy_limit('INMD',1,40)

Client.place_order(config.account_id, order_spec_buy)
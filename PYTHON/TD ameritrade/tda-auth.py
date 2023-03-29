from tda import auth,client
import config

try:
    Client = auth.client_from_token_file(config.token_path, config.api_key)
except FileNotFoundError:
    from selenium import webdriver
    with webdriver.Chrome(executable_path=config.chromedriver_path) as driver:
        Client = auth.client_from_login_flow(
            driver, config.api_key, config.redirect_uri, config.token_path)
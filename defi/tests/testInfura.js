var Web3 = require('web3')
  
if (typeof web3 !== 'undefined') {
    web3 = new Web3(web3.currentProvider);
} else {
    web3 = new Web3(new Web3.providers.HttpProvider("https://ropsten.infura.io/v3/<PROJECT ID>"));
}
